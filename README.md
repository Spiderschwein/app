# Studio Link

<div align="center">
	<a href="https://studio-link.de" target="_blank">
		<img src="https://studio-link.de/assets/webbanner/sl_button-234x60@3x.png" width="500">
	</a>
</div>
<div align="center">
<a href="https://travis-ci.org/Studio-Link/app"><img src="https://travis-ci.org/Studio-Link/app.svg?branch=v19.xx.x" alt="Build Status"></a>
</div>

## About Studio Link

Studio Link is a SIP application to create high quality Audio over IP (AoIP) connections.

## Usage

Please use the prebuilt binarys at https://doku.studio-link.de/standalone/installation-standalone.html

## Supported Platforms

- Windows 64Bit
- macOS 64Bit
- Linux 64Bit

## Changelog

See [CHANGELOG.md](CHANGELOG.md)


## Development

### CI builds

https://download.studio.link/devel/

### Build Requirements

- OpenSSL
- Libtool
- LV2 (optional)
- Header files for OpenSSL, ALSA, PulseAudio and JACK
- xxd and nodejs/npm

### Build Requirements on Ubuntu 16.04/18.04

The needed header files are in these packages:  
libssl-dev libasound2-dev libjack-jackd2-dev libtool build-essential 
autoconf automake libpulse0 libpulse-dev xxd

And current nodejs/npm (Node.js v10.x v11.x or v12.x):

https://github.com/nodesource/distributions/blob/master/README.md

### Build on Linux

```bash
mdkir studio-link
cd studio-link
git clone https://github.com/Studio-Link/3rdparty.git
cd 3rdparty
export BUILD_TARGET="linux"; dist/build.sh
cd ..
git clone https://github.com/Studio-Link/app.git
cd app
export TRAVIS_OS_NAME="linux"; dist/build.sh
```

### Build on Linux with JACK support

```bash
mdkir studio-link
cd studio-link
git clone https://github.com/Studio-Link/3rdparty.git
cd 3rdparty
export BUILD_TARGET="linuxjack"; dist/build.sh
cd ..
git clone https://github.com/Studio-Link/app.git
cd app
export TRAVIS_OS_NAME="linux"; export BUILD_OS="linuxjack"; dist/build.sh
```

### Build on macOS

```bash
mdkir studio-link
cd studio-link
git clone https://github.com/Studio-Link/3rdparty.git
cd 3rdparty
export TRAVIS_OS_NAME="osx"; dist/build.sh
cd ..
git clone https://github.com/Studio-Link/app.git
cd app
export TRAVIS_OS_NAME="osx"; dist/build.sh
```

### Build for Windows on Arch Linux (only)

```bash
mdkir studio-link
cd studio-link
git clone https://github.com/Studio-Link/3rdparty.git
cd 3rdparty
export TRAVIS_OS_NAME="windows64"; dist/build_windows.sh
cd ..
git clone https://github.com/Studio-Link/app.git
cd app
export TRAVIS_OS_NAME="windows64"; dist/build_windows.sh
```

## License

The Studio Link Apps are open-sourced software licensed under the [MIT license](LICENSE).
