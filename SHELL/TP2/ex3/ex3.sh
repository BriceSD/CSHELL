#!/bin/sh
find $HOME /( -name 'core' -o -name '*v' -o -name '#*#' \) -exec rm -i {}\;
