/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OCPPackagePart.h"


@class OISFUZipEntry;



__attribute__((visibility("hidden")))

@interface OCPZipPackagePart : OCPPackagePart

{

    OISFUZipEntry *mEntry;

}



- (void)copyToFile:(id)arg1;

- (id)data;

- (void)dealloc;

- (id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3;

- (struct _xmlDoc *)xmlDocument;

- (struct _xmlTextReader *)xmlReader;

@property(readonly, nonatomic) OISFUZipEntry *zipEntry; // @synthesize zipEntry=mEntry;



@end


