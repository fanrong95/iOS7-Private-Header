/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSString, NSUUID;



@interface AXSwitch : NSObject <NSSecureCoding>

{

    unsigned short _keyCode;

    long long _action;

    NSString *_name;

    struct NSString *_source;

    struct NSString *_type;

    NSString *_productName;

    NSString *_manufacturerName;

    long long _buttonNumber;

    long long _headSwitch;

    NSUUID *_uuid;

}



+ (_Bool)supportsSecureCoding;

+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;

@property(nonatomic) long long action; // @synthesize action=_action;

@property(nonatomic) long long buttonNumber; // @synthesize buttonNumber=_buttonNumber;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

@property(nonatomic) long long headSwitch; // @synthesize headSwitch=_headSwitch;

- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;

@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;

@property(retain, nonatomic) NSString *source; // @synthesize source=_source;

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;



@end


