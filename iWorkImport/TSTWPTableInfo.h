/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSTTableInfo.h"


__attribute__((visibility("hidden")))

@interface TSTWPTableInfo : TSTTableInfo

{

}



- (id)initFromUnarchiver:(id)arg1;

- (void)loadFromArchive:(const struct WPTableInfoArchive *)arg1 unarchiver:(id)arg2;

- (void)saveToArchive:(struct WPTableInfoArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end


