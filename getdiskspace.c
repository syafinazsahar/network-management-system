#include <stdio.h>
#include <sys/vfs.h>

int main (int argc, char *argv[])
{
  struct statfs sStats;

  if( statfs( "/home", &sStats ) == -1 )
    printf( "statfs() failed\n" );
  else
  {
    printf( "file system type:                   %x\n",  sStats.f_type );
    printf( "optimal transfer block size:        %ld\n", sStats.f_bsize );
    printf( "total data blocks in file system:   %ld\n", sStats.f_blocks );
    printf( "free blocks avail to non-superuser: %ld\n", sStats.f_bavail );
    printf( "total file nodes in file system:    %ld\n", sStats.f_files );
    printf( "free file nodes in file system:     %ld\n", sStats.f_ffree );
    printf( "maximum length of filenames:        %ld\n", sStats.f_namelen );
  }
  return 0;
}
