# My custom keyboard config

## Installation
For reference [read this](https://docs.qmk.fm/#/newbs_getting_started)

### Prepare project

```sh
  git clone --depth 1 https://github.com/zsa/qmk_firmware.git && \
  cd qmk_firmware && \
  git clone git@github.com:well1791/8km.git && \
  mv 8km keyboards/planck/keymaps/ && \
  cd 8km
```

## Setup [see here](https://github.com/zsa/qmk_firmware)

```sh
  brew install qmk/qmk/qmk
  brew tap ArmMbed/homebrew-formulae
  brew install arm-none-eabi-gcc
  qmk setup zsa/qmk_firmware -b firmware22
```

> NOTE: If you run into `No formula or cask found for "gcc-arm-none-eabi".`, go
> to [ARMmbed/homebrew-formulae](https://github.com/ARMmbed/homebrew-formulae)

## How to compile

```sh
  make planck/ez/glow:8km && \
  mv planck_ez_glow_8km.bin ~/Downloads/
  # now use wally
```

## Basic
- [spreadsheet](https://docs.google.com/spreadsheets/d/1zWwkYRQJQ8ao0kMYnWUnc-Qe-N1wYalShalTAtkvUZg/edit?usp=sharing)
- [oryx config](https://configure.zsa.io/planck-ez/layouts/XYxjo/latest/0) (*outdated)
