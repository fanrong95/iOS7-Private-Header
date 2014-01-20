/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, OADBlipCollection, OADGraphicStyleCache, OADTextListStyle, OCDReader, OCDSummary, OCDWriter;



__attribute__((visibility("hidden")))

@interface OCDDocument : NSObject

{

    OCDReader *mReader;

    OCDWriter *mWriter;

    OCDSummary *mSummary;

    OADBlipCollection *mBlips;

    OADTextListStyle *mDefaultTextStyle;

    OADGraphicStyleCache *mGraphicStyleCache;

    NSData *mEncryptionInfo;

}



@property(readonly, nonatomic) OADBlipCollection *blips; // @synthesize blips=mBlips;

- (void)dealloc;

@property(readonly, nonatomic) OADTextListStyle *defaultTextStyle; // @synthesize defaultTextStyle=mDefaultTextStyle;

- (id)encryptionInfo;

@property(retain, nonatomic) OADGraphicStyleCache *graphicStyleCache; // @synthesize graphicStyleCache=mGraphicStyleCache;

- (id)init;

- (_Bool)isFromBinaryFile;

- (_Bool)isToBinaryFile;

@property(retain, nonatomic) OCDReader *reader; // @synthesize reader=mReader;

- (void)setEncryptionInfo:(id)arg1;

@property(retain, nonatomic) OCDWriter *writer; // @synthesize writer=mWriter;

@property(readonly, nonatomic) OCDSummary *summary; // @synthesize summary=mSummary;



@end


