/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface asn1Token : NSObject

{

    unsigned char mClass;

    unsigned long long mIdentifier;

    unsigned long long mLength;

    const char *mContent;

}



+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;

+ (id)readTokenFromBuffer:(const char *)arg1;

+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(_Bool)arg2;

- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;

@property(readonly) const char *content; // @synthesize content=mContent;

- (id)description;

@property(readonly) unsigned long long identifier; // @synthesize identifier=mIdentifier;

@property(readonly) unsigned long long length; // @synthesize length=mLength;

@property(readonly) unsigned char tokenClass; // @synthesize tokenClass=mClass;



@end


