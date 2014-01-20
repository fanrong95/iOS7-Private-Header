/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSString;



@interface PKPassField : NSObject <NSSecureCoding>

{

    NSString *_value;

    long long _type;

    NSString *_key;

    NSString *_label;

    id _unformattedValue;

    NSString *_changeMessage;

    long long _textAlignment;

    unsigned long long _dataDetectorTypes;

}



+ (_Bool)supportsSecureCoding;

@property(copy, nonatomic) NSString *changeMessage; // @synthesize changeMessage=_changeMessage;

@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (void)flushCachedValue;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;

@property(nonatomic) long long type; // @synthesize type=_type;

@property(copy, nonatomic) id unformattedValue; // @synthesize unformattedValue=_unformattedValue;

@property(readonly) NSString *value;



@end


