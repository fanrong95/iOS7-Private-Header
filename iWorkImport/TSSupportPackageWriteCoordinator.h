/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPPackageWriteCoordinator.h"


__attribute__((visibility("hidden")))

@interface TSSupportPackageWriteCoordinator : TSPPackageWriteCoordinator

{

    TSPPackageWriteCoordinator *_packageWriteCoordinator;

}



- (void).cxx_destruct;

- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2;

- (_Bool)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id *)arg3;

- (void)didReferenceData:(id)arg1;

- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;

- (id)initWithContext:(id)arg1 packageWriteCoordinator:(id)arg2;

- (_Bool)isComponentExternal:(id)arg1 wasWritten:(_Bool *)arg2 wasCopied:(_Bool *)arg3;

- (_Bool)isObjectInExternalPackage:(id)arg1 claimingComponent:(id *)arg2;

- (id)objectForIdentifier:(long long)arg1;

- (_Bool)shouldEnqueueComponent:(id)arg1;



@end


