/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSDictionary, NSString;



@interface CABehavior : NSObject <NSCoding, NSCopying>

{

    void *_attr;

    unsigned int _refcount;

    unsigned int _uid;

    void *_priv;

}



+ (void)CAMLParserStartElement:(id)arg1;

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

+ (void *)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;

+ (void *)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

+ (id)behavior;

+ (id)defaultValueForKey:(id)arg1;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;

- (id)CAMLTypeForKey:(id)arg1;

- (void)_setCARenderBehavior:(struct Behavior *)arg1;

- (_Bool)allowsWeakReference;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)debugDescription;

@property id delegate;

- (void)encodeWithCAMLWriter:(id)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

@property(getter=isEnabled) _Bool enabled;

@property(copy) NSString *name;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;

- (_Bool)retainWeakReference;

@property(copy) NSDictionary *style;

- (void)setValue:(id)arg1 forKey:(id)arg2;

- (void)setValue:(id)arg1 forKeyPath:(id)arg2;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

- (_Bool)shouldArchiveValueForKey:(id)arg1;

- (id)valueForKey:(id)arg1;

- (id)valueForKeyPath:(id)arg1;

- (id)valueForUndefinedKey:(id)arg1;



@end


