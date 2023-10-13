# My custom keyboard config

## Installation
For reference [read this](https://docs.qmk.fm/#/newbs_getting_started)

### Install dependencies
```sh
  brew install qmk/qmk/qmk
```

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
  qmk setup zsa/qmk_firmware -b firmware22
```

## How to compile
1. `make planck/ez/glow:8km` (should display all as "ok")
1. `mv planck_ez_glow_8km.bin ~/Downloads/`
1. use wally

## Basic
- [spreadsheet](https://docs.google.com/spreadsheets/d/1zWwkYRQJQ8ao0kMYnWUnc-Qe-N1wYalShalTAtkvUZg/edit?usp=sharing)
- [oryx config](https://configure.zsa.io/planck-ez/layouts/XYxjo/latest/0) (*outdated)
