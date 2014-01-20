/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASItem.h"


#import "DAMailMessageAttachment.h"

#import "NSCoding.h"



@class NSNumber, NSString;



@interface ASAttachment : ASItem <DAMailMessageAttachment, NSCoding>

{

    NSString *_attName;

    NSNumber *_attSize;

    NSNumber *_attMethod;

    NSString *_attDisplayName;

    NSString *_attContentId;

    NSString *_attContentLocation;

    NSNumber *_attIsInline;

    NSNumber *_hasBase64Transfer;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

@property(copy) NSString *contentId; // @synthesize contentId=_attContentId;

@property(copy) NSString *contentLocation; // @synthesize contentLocation=_attContentLocation;

- (void)dealloc;

- (id)description;

@property(copy) NSString *displayName; // @synthesize displayName=_attDisplayName;

- (void)encodeWithCoder:(id)arg1;

@property(copy) NSNumber *hasBase64Transfer; // @synthesize hasBase64Transfer=_hasBase64Transfer;

- (id)initWithCoder:(id)arg1;

@property(copy) NSNumber *isInline; // @synthesize isInline=_attIsInline;

- (_Bool)isMostDefinitelyBase64ed;

@property(copy) NSNumber *method; // @synthesize method=_attMethod;

@property(copy) NSString *name; // @synthesize name=_attName;

- (void)setPercentEscapedName:(id)arg1;

@property(copy) NSNumber *size; // @synthesize size=_attSize;



@end


