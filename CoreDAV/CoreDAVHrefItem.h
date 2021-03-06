/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVLeafItem.h"


@class NSURL;



@interface CoreDAVHrefItem : CoreDAVLeafItem

{

    NSURL *_baseURL;

    int _writeStyle;

}



@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithURL:(id)arg1;

- (void)parserSuggestsBaseURL:(id)arg1;

- (id)payloadAsFullURL;

- (id)payloadAsOriginalURL;

@property int writeStyle; // @synthesize writeStyle=_writeStyle;

- (void)write:(id)arg1;



@end


