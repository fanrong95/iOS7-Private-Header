/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class RTFNSColor;



__attribute__((visibility("hidden")))

@interface RTFNSShadow : NSObject

{

    RTFNSColor *shadowColor;

    struct CGSize shadowOffset;

    double shadowBlurRadius;

}



@property double shadowBlurRadius; // @synthesize shadowBlurRadius;

@property(retain) RTFNSColor *shadowColor; // @synthesize shadowColor;

@property struct CGSize shadowOffset; // @synthesize shadowOffset;



@end


