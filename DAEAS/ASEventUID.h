/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ASParsingLeafNode.h"

#import "NSCopying.h"



@class NSDate, NSString;



@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying>

{

    NSDate *_exceptionDate;

    NSString *_uidWithoutExceptionDate;

    _Bool _isOutlookCreatedUid;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (_Bool)expectsContent;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)exceptionDate;

- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;

- (id)initWithCalFrameworkString:(id)arg1;

- (int)parsingState;

- (id)recurrenceIDForResponseEmail;

- (void)setExceptionDate:(id)arg1;

- (id)uidForActiveSyncWithTimeZone:(id)arg1;

- (id)uidForCalFramework;

- (id)uidForResponseEmailWithTimeZone:(id)arg1;

- (id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(_Bool *)arg2;

- (id)uidWithoutExceptionDate;



@end


