/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DResourceLoader.h"


__attribute__((visibility("hidden")))

@interface TSCH3DVAOLoader : TSCH3DResourceLoader

{

}



- (struct VAOLoadResult)activateObjectState:(const struct ObjectState *)arg1 indices:(id)arg2 insideSession:(id)arg3;

- (void)bindHandle:(id)arg1 config:(void *)arg2;

- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;

- (id)generateHandleWithConfig:(void *)arg1;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;



@end

