/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASItem.h"


@class NSString;



@interface ASPolicy : ASItem

{

    NSString *_type;

    NSString *_key;

    NSString *_status;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (void)_setKey:(id)arg1;

- (void)_setStatus:(id)arg1;

- (void)_setType:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)key;

- (id)perDomainDictsForPolicy;

- (int)status;

- (id)type;



@end

