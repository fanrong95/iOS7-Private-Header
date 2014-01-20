/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSBundle, NSData, NSString, UINibDecoder;



__attribute__((visibility("hidden")))

@interface UINibStorage : NSObject

{

    NSString *bundleResourceName;

    NSString *bundleDirectoryName;

    NSBundle *bundle;

    NSString *identifierForStringsFile;

    NSData *archiveData;

    UINibDecoder *nibDecoder;

    _Bool instantiatingForSimulator;

    _Bool captureImplicitLoadingContextOnDecode;

}



@property(copy, nonatomic) NSData *archiveData; // @synthesize archiveData;

@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle;

@property(copy, nonatomic) NSString *bundleDirectoryName; // @synthesize bundleDirectoryName;

@property(copy, nonatomic) NSString *bundleResourceName; // @synthesize bundleResourceName;

@property _Bool captureImplicitLoadingContextOnDecode; // @synthesize captureImplicitLoadingContextOnDecode;

- (void)dealloc;

@property(copy, nonatomic) NSString *identifierForStringsFile; // @synthesize identifierForStringsFile;

@property(nonatomic) _Bool instantiatingForSimulator; // @synthesize instantiatingForSimulator;

@property(retain, nonatomic) UINibDecoder *nibDecoder; // @synthesize nibDecoder;



@end


