/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSString;



@interface AXEventKeyInfoRepresentation : NSObject <NSSecureCoding, NSCopying>

{

    _Bool _keyDown;

    unsigned short _keyCode;

    unsigned int _modifierState;

    NSString *_unmodifiedInput;

    NSString *_modifiedInput;

    NSString *_shiftModifiedInput;

}



+ (_Bool)supportsSecureCoding;

- (id)_hardwareKeyboardLayout;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;

@property(nonatomic) _Bool keyDown; // @synthesize keyDown=_keyDown;

@property(retain, nonatomic) NSString *modifiedInput; // @synthesize modifiedInput=_modifiedInput;

@property(nonatomic) unsigned int modifierState; // @synthesize modifierState=_modifierState;

@property(retain, nonatomic) NSString *shiftModifiedInput; // @synthesize shiftModifiedInput=_shiftModifiedInput;

@property(retain, nonatomic) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;

- (void)translateKeycode;



@end


