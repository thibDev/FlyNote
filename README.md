# FlyNote :pencil2:
[![Build Status](https://travis-ci.org/ThiBsc/FlyNote.svg?branch=master)](https://travis-ci.org/ThiBsc/FlyNote)
[![AUR-GIT](https://img.shields.io/aur/version/flynote-git.svg?color=3fbaec&label=aur-git)](https://aur.archlinux.org/packages/flynote-git/)
[![License: GPLv3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://opensource.org/licenses/gpl-3.0)

A program to take note on desktop like a Post-It and share on LAN.

![FlyNote](screenshot/sample.jpg)

## Features

* [x] Add/Delete/Edit note
* [x] Save the list of notes
* [x] Share a note on LAN
* [x] Send to one user
* [x] Sender's identity
* [x] Receive notification
* [ ] Markdown Editor

## Compile

```sh
# require qt5-default
mkdir build
cd build
qmake -config release ../flynote.pro
make
```

## Broadcast test

If you want to test the broadcast receiver, start FlyNote, start a shell and write:
```bash
ncat -u 192.168.0.255 45454
# test user connection
user_join:toto
user_left:toto
# test broadcast note
note:{"title":"ncat note", "color":"lightblue", "content":"hello world!", "from":"ncat"}
```
If you have some trouble with windows, check your firewall.

## Icons

Note, add, delete, edit and send icon made by [Freepik](https://www.freepik.com/) from [Flaticon](www.flaticon.com)  
Broadcast icon made by [smallikeart](https://www.flaticon.com/authors/smalllikeart) from [Flaticon](www.flaticon.com)  
User icon made by [smashicons](https://www.flaticon.com/authors/smashicons) from [Flaticon](www.flaticon.com)  
