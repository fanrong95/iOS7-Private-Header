/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface TSUTemporaryDirectory : NSObject

{

    NSString *_path;

    _Bool _leak;

}



- (void)_createDirectoryWithSignature:(id)arg1;

- (void)dealloc;

- (id)init;

- (id)initWithSignature:(id)arg1;

- (void)leakTemporaryDirectory;

- (id)path;



@end


