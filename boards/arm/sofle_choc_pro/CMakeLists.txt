# Diese Zeile sagt Zephyr, welcher Chip auf dem Board verbaut ist
zephyr_board_set_soc_variant(nRF52840_QIAA)

# Dies registriert das Board im Build-System
zephyr_library()
