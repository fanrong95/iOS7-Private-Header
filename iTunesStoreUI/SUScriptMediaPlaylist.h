/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptMediaItemCollection.h"


@class MPMediaPlaylist;



@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

{

}



+ (void)initialize;

+ (long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1;

+ (id)scriptPlaylistAttributesForNativePlaylistAttributes:(long long)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

@property(readonly, nonatomic) MPMediaPlaylist *nativePlaylist;

- (id)valueForProperty:(id)arg1;



@end


