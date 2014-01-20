/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSCoder.h"



@class UINibStringIDTable;



__attribute__((visibility("hidden")))

@interface UINibDecoder : NSCoder

{

    Class arrayClass;

    Class setClass;

    Class dictionaryClass;

    Class *classes;

    id *missingClasses;

    struct UINibDecoderObjectEntry *objects;

    struct UINibDecoderValue *values;

    char *valueTypes;

    void *valueData;

    unsigned long long valueDataSize;

    struct UINibDecoderHeader header;

    id *objectsByObjectID;

    unsigned int *longObjectClassIDs;

    char *shortObjectClassIDs;

    unsigned int *keyMasks;

    long long inlinedValueKey;

    struct UINibDecoderRecursiveState recursiveState;

    UINibStringIDTable *keyIDTable;

    id delegate;

    struct UIKeyToKeyIDCache keyIDCache;

    struct UIKeyAndScopeToValueCache valueCache;

    long long lookupRounds;

    long long maxPossibleLookupRounds;

    long long failedByKeyMask;

    long long savedByKeyMask;

}



+ (id)unarchiveObjectWithData:(id)arg1;

+ (id)unarchiveObjectWithFile:(id)arg1;

- (_Bool)allowsKeyedCoding;

- (_Bool)containsValueForKey:(id)arg1;

- (void)dealloc;

- (_Bool)decodeArrayOfCGFloats:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;

- (_Bool)decodeArrayOfDoubles:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;

- (_Bool)decodeArrayOfFloats:(float *)arg1 count:(long long)arg2 forKey:(id)arg3;

- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;

- (_Bool)decodeBoolForKey:(id)arg1;

- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;

- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;

- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;

- (struct CGPoint)decodeCGPointForKey:(id)arg1;

- (struct CGRect)decodeCGRectForKey:(id)arg1;

- (struct CGSize)decodeCGSizeForKey:(id)arg1;

- (id)decodeDataObject;

- (double)decodeDoubleForKey:(id)arg1;

- (float)decodeFloatForKey:(id)arg1;

- (int)decodeInt32ForKey:(id)arg1;

- (long long)decodeInt64ForKey:(id)arg1;

- (int)decodeIntForKey:(id)arg1;

- (long long)decodeIntegerForKey:(id)arg1;

- (id)decodeNXObject;

- (id)decodeObject;

- (id)decodeObjectForKey:(id)arg1;

- (id)decodePropertyList;

- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;

- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;

- (void)decodeValuesOfObjCTypes:(const char *)arg1;

@property id delegate; // @synthesize delegate;

- (void)finishDecoding;

- (id)initForReadingWithData:(id)arg1;

- (id)initForReadingWithData:(id)arg1 error:(id *)arg2;

- (id)nextGenericKey;

- (void)replaceObject:(id)arg1 withObject:(id)arg2;

- (unsigned int)systemVersion;

- (_Bool)validateAndIndexClasses:(const void *)arg1 length:(unsigned long long)arg2;

- (_Bool)validateAndIndexData:(id)arg1 error:(id *)arg2;

- (_Bool)validateAndIndexKeys:(const void *)arg1 length:(unsigned long long)arg2;

- (_Bool)validateAndIndexObjects:(const void *)arg1 length:(unsigned long long)arg2;

- (_Bool)validateAndIndexValues:(const void *)arg1 length:(unsigned long long)arg2;

- (long long)versionForClassName:(id)arg1;



@end


