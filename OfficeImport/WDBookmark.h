/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "WDRun.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface WDBookmark : WDRun

{

    NSString *mName;

    int mBookmarkType;

}



- (int)bookmarkType;

- (void)dealloc;

- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;

- (id)name;

- (int)runType;

- (void)setBookmarkType:(int)arg1;

- (void)setName:(id)arg1;



@end


