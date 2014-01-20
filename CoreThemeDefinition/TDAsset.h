/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSManagedObject.h"



@class NSString, TDThemeBitSource;



@interface TDAsset : NSManagedObject

{

    unsigned int _scaleFactor;

}



+ (id)_filenameRegex;

+ (long long)idiomFromImageFilename:(id)arg1;

+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;

+ (long long)subtypeFromImageFilename:(id)arg1;

- (id)_sourceRelativePathComponents;

@property(readonly, nonatomic) NSString *baseName;

- (id)fileURLWithDocument:(id)arg1;

- (_Bool)hasProduction;

- (unsigned int)scaleFactor;

- (void)setHasProduction:(id)arg1;

- (void)setScaleFactor:(unsigned int)arg1;

- (id)sourceRelativePath;



// Remaining properties

@property(retain, nonatomic) NSString *category; // @dynamic category;

@property(retain, nonatomic) NSString *name; // @dynamic name;

@property(retain, nonatomic) TDThemeBitSource *source; // @dynamic source;



@end


