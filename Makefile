
export V?=0

.PHONY: all
all:
	$(MAKE) -C host CROSS_COMPILE="$(HOST_CROSS_COMPILE)"
	$(MAKE) -C so CROSS_COMPILE="$(HOST_CROSS_COMPILE)"
	$(MAKE) -C app CROSS_COMPILE="$(HOST_CROSS_COMPILE)"
	$(MAKE) -C ta CROSS_COMPILE="$(TA_CROSS_COMPILE)"

.PHONY: clean
clean:
	$(MAKE) -C host clean
	$(MAKE) -C so clean
	$(MAKE) -C app clean
	$(MAKE) -C ta clean
