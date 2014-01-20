/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DResourceLoader.h"


__attribute__((visibility("hidden")))

@interface TSCH3DGLVBOLoader : TSCH3DResourceLoader

{

    unsigned int mType;

}



+ (id)loaderWithType:(unsigned int)arg1;

- (_Bool)activateResource:(id)arg1 insideSession:(id)arg2;

- (void)bindHandle:(id)arg1 config:(void *)arg2;

- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;

- (id)generateHandleWithConfig:(void *)arg1;

- (unsigned long long)hash;

- (id)initWithType:(unsigned int)arg1;

- (_Bool)isEqual:(id)arg1;

- (void)loadSingleValueInBuffer:(id)arg1;

- (void)setClientState:(const struct DataBufferInfo *)arg1;

- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;

- (unsigned int)usageOfResource:(id)arg1;



@end


