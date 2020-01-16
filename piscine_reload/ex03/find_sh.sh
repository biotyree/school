#!/bin/sh
find . -print | grep .sh | rev | cut  -f 1 -d / | cut -c 4- | rev
