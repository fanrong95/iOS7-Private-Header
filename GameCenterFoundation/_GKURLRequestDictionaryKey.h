/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSURLRequest;



@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>

{

    NSURLRequest *_request;

}



+ (id)keyWithRequest:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

- (id)initWithRequest:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;



@end


