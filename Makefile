all: questone_2a.bin

%.o: %.c
	arm-none-eabi-gcc -O1 -g -Iinclude -mthumb -mcpu=cortex-m0 -c -o $@ $<

%.elf: %.o
	arm-none-eabi-ld -T custom_led.lds -Bstatic -nostdlib --entry 0 -EL -o $@ $<

%.bin: %.elf
	arm-none-eabi-objcopy -O binary $< $@

.PHONY: clean
clean:
	\rm -rf *.elf *.o *.bin

