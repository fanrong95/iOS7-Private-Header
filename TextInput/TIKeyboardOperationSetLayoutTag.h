/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TIKeyboardOperation.h"


@class NSString;



@interface TIKeyboardOperationSetLayoutTag : TIKeyboardOperation

{

    NSString *_layoutTag;

}



+ (id)operationWithLayoutTag:(id)arg1;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithLayoutTag:(id)arg1;

@property(readonly, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;

- (id)propertiesForDescription;



@end


