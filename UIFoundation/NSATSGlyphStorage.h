/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CTGlyphStorageInterface.h"



@class NSATSTypesetter, NSString;



__attribute__((visibility("hidden")))

@interface NSATSGlyphStorage : CTGlyphStorageInterface

{

    struct __CTGlyphStorage *_glyphStorage;

    struct __CFArray *_masterRuns;

    NSATSTypesetter *_typesetter;

    CDStruct_33c5d873 *_runs;

    long long _numRuns;

    long long _runBufferSize;

    struct _NSRange _glyphRange;

    struct _NSRange _characterRange;

    long long _bufferSize;

    NSATSGlyphStorage *_parent;

    struct __CFSet *_children;

    long long _paraEndElasticCharIndex;

    double _paraEndElasticCharWidth;

    NSString *_textString;

    struct {

        long long _field1;

        struct {

            unsigned short _field1;

            struct CGSize _field2;

            unsigned int _field3;

            long long _field4;

            long long _field5;

        } _field2[0];

    } *_stack;

    const CDStruct_33c5d873 *_lastElasticRun;

    long long _lastElasticRunLocation;

    long long _totalAbsorbedCount;

    CDStruct_9f69489a _gFlags;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

- (const CDStruct_33c5d873 *)_attributeRunForCharacterAtIndex:(long long)arg1;

- (struct _NSRange)_collectElasticRangeSurroundingCharacterAtIndex:(long long)arg1 minimumCharacterIndex:(long long)arg2;

- (struct __CTRun *)_createEllipsisRunWithStringRange:(CDStruct_627e0f85)arg1 attributes:(struct __CFDictionary *)arg2;

- (void)_flushCachedObjects;

- (void)_invalidate;

- (_Bool)_isDeallocating;

- (_Bool)_resolvePositionalStakeGlyphsForLineFragment:(struct __CTLine *)arg1 lineFragmentRect:(struct CGRect)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 maxLineFragmentWidth:(double)arg5 breakHint:(long long *)arg6;

- (_Bool)_tryRetain;

- (double)_widthForStringRange:(struct _NSRange)arg1;

- (id)childGlyphStorageWithCharacterRange:(struct _NSRange)arg1;

- (struct __CTTypesetter *)createCTTypesetter;

- (struct __CTGlyphStorage *)createCopy:(CDStruct_627e0f85)arg1;

- (void)dealloc;

- (void)disposeGlyphStack;

- (void)finalize;

- (void)getCustomAdvance:(struct CGSize *)arg1 forIndex:(long long)arg2;

- (void)initGlyphStack:(long long)arg1;

- (id)initWithTypesetter:(id)arg1;

- (void)insertGlyphs:(CDStruct_627e0f85)arg1;

- (void)moveGlyphsTo:(long long)arg1 from:(CDStruct_627e0f85)arg2;

- (void)popGlyph:(long long)arg1;

- (void)pushGlyph:(long long)arg1;

- (oneway void)release;

- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;

- (void)setAdvance:(struct CGSize)arg1 forIndex:(long long)arg2;

- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;

- (void)setGlyphRange:(struct _NSRange)arg1 characterRange:(struct _NSRange)arg2;

- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;

- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;

- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;

- (id)typesetter;



@end


