/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SAMicroblogMicroblogSearchResultPost.h"


@class NSString, NSURL;



@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

{

}



+ (id)microblogSearchResultNews;

+ (id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSURL *articleURL;

@property(copy, nonatomic) NSString *description;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *title;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end


