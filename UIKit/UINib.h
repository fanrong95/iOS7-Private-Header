/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface UINib : NSObject

{

    id storage;

}



+ (id)nibWithData:(id)arg1 bundle:(id)arg2;

+ (id)nibWithNibName:(id)arg1 bundle:(id)arg2;

- (void)_registerForMemoryWarningIfNeeded;

- (id)bundleResourcePath;

- (_Bool)captureEnclosingNIBBundleOnDecode;

- (_Bool)captureImplicitLoadingContextOnDecode;

- (void)dealloc;

- (void)didReceiveMemoryWarning:(id)arg1;

- (id)effectiveBundle;

- (void)encodeWithCoder:(id)arg1;

- (id)identifierForStringsFile;

- (id)initWithBundle:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1;

- (id)initWithData:(id)arg1 bundle:(id)arg2;

- (id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3;

- (id)instantiateWithOwner:(id)arg1 options:(id)arg2;

- (_Bool)instantiatingForSimulator;

- (id)lazyArchiveData;

- (id)nibDataForPath:(id)arg1;

- (void)setCaptureEnclosingNIBBundleOnDecode:(_Bool)arg1;

- (void)setCaptureImplicitLoadingContextOnDecode:(_Bool)arg1;

- (void)setIdentifierForStringsFile:(id)arg1;

- (void)setInstantiatingForSimulator:(_Bool)arg1;

- (id)unarchiverForInstantiatingReturningError:(id *)arg1;



@end


