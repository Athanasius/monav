Based on:

https://code.google.com/archive/p/monav/downloads/
https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/monav/monav-0.3.tar.gz

And tweaked to compile on a Debian Jessie system, plus fix a bug with
not close()'ing all files during compression, which can lead to later
code complaining it can't remove a directory if on NFS, and thus failure
of routing preprocessing.

License remains GPLv3, as per https://code.google.com/archive/p/monav/
