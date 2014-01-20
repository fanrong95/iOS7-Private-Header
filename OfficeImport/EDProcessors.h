/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EDWorkbook, NSMutableArray;



__attribute__((visibility("hidden")))

@interface EDProcessors : NSObject

{

    EDWorkbook *mWorkbook;

    NSMutableArray *mProcessors;

}



- (void)addProcessorClass:(Class)arg1;

- (void)applyProcessorsWithSheet:(id)arg1;

- (void)dealloc;

- (_Bool)hasProcessors;

- (id)initWithWorkbook:(id)arg1;

- (void)markObject:(id)arg1 processor:(Class)arg2;

- (void)removeAllObjects;

- (void)removeProcessorClass:(Class)arg1;



@end


