/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommandGroup.h"


__attribute__((visibility("hidden")))

@interface TSKProgressiveCommandGroup : TSKCommandGroup

{

}



- (const struct CommandGroupArchive *)commandGroupArchiveFromUnarchiver:(id)arg1;

- (id)initFromUnarchiver:(id)arg1;

- (void)loadFromArchive:(const struct ProgressiveCommandGroupArchive *)arg1 unarchiver:(id)arg2;

- (const struct ProgressiveCommandGroupArchive *)progressiveCommandGroupArchiveFromUnarchiver:(id)arg1;

- (void)saveToArchive:(struct ProgressiveCommandGroupArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end


