# shields/nice_view_disp/CMakeLists.txt

if (CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_DISP_WIDGET_STATUS)
    # Header-Pfad bekannt machen (falls du einen separaten include-Ordner hast)
    # Meistens liegen die .h aber direkt bei den .c Dateien
    zephyr_include_directories(.)

    # Diese Dateien werden immer benötigt
    target_sources(app PRIVATE 
        custom_status_screen.c
        widgets/bolt.c
        widgets/util.c
    )

    # Logik für Central (links/Hauptseite) vs Peripheral (rechts)
    if(NOT CONFIG_ZMK_SPLIT OR CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
        message(STATUS "ZMK: Building central display widgets")
        target_sources(app PRIVATE widgets/status.c)
    else()
        message(STATUS "ZMK: Building peripheral display widgets")
        target_sources(app PRIVATE 
            widgets/art.c
            widgets/peripheral_status.c
        )
    endif()
endif()
