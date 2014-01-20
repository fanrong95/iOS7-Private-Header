/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class WebBookmark, WebBookmarkCollection;



__attribute__((visibility("hidden")))

@interface BABookmarkItem : NSObject

{

    WebBookmarkCollection *_collection;

    WebBookmark *_bookmark;

}



@property(retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;

@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;

- (void)dealloc;

- (id)description;

- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2;



@end


