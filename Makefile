.PHONY: build

BUILD_DIR = build/default

build:
	cd $(BUILD_DIR) && ninja

setup:
	mkdir -p $(BUILD_DIR) && cd $(BUILD_DIR) && cmake -GNinja ../../
