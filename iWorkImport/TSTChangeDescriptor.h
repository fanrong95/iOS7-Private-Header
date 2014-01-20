/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSHashTable, TSTCellRegion;



__attribute__((visibility("hidden")))

@interface TSTChangeDescriptor : NSObject

{

    int mChangeDescriptor;

    TSTCellRegion *mCellRegion;

    CDStruct_0441cfb5 mCellID;

    TSTCellRegion *mExpandedRegion;

    TSTCellRegion *mStrokeRegion;

    NSHashTable *mReferenceIdentifiers;

}



+ (id)changeDescriptorWithType:(int)arg1;

+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRange:(CDStruct_5f1f7aa9)arg3;

+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRange:(CDStruct_5f1f7aa9)arg3 strokeRange:(CDStruct_5f1f7aa9)arg4;

+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4;

+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 strokeRange:(CDStruct_5f1f7aa9)arg3;

+ (id)changeDescriptorWithType:(int)arg1 cellRange:(CDStruct_5f1f7aa9)arg2;

+ (id)changeDescriptorWithType:(int)arg1 cellRange:(CDStruct_5f1f7aa9)arg2 strokeRange:(CDStruct_5f1f7aa9)arg3;

+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2;

+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3;

+ (id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2;

+ (id)changeDescriptorWithType:(int)arg1 strokeRange:(CDStruct_5f1f7aa9)arg2;

+ (id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2;

@property(readonly, nonatomic) CDStruct_0441cfb5 cellID; // @synthesize cellID=mCellID;

- (CDStruct_5f1f7aa9)cellRange;

@property(readonly, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=mCellRegion;

@property(readonly, nonatomic) int changeDescriptor; // @synthesize changeDescriptor=mChangeDescriptor;

- (void)dealloc;

- (id)description;

- (CDStruct_5f1f7aa9)expandedRange;

@property(retain, nonatomic) TSTCellRegion *expandedRegion; // @synthesize expandedRegion=mExpandedRegion;

- (id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(CDStruct_0441cfb5)arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSHashTable *referenceIdentifiers; // @synthesize referenceIdentifiers=mReferenceIdentifiers;

- (void)setExpandedRange:(CDStruct_5f1f7aa9)arg1;

- (CDStruct_5f1f7aa9)strokeRange;

@property(readonly, nonatomic) TSTCellRegion *strokeRegion; // @synthesize strokeRegion=mStrokeRegion;



@end


