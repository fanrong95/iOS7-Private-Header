/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_semaphore>;



__attribute__((visibility("hidden")))

@interface TSCECellCoordinateVector : NSObject

{

    vector_40b16ab8 mCellCoordinates;

    NSObject<OS_dispatch_semaphore> *mSem;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)addCellCoordinate:(CDStruct_0441cfb5)arg1;

- (vector_40b16ab8 *)cellCoordinates;

- (void)dealloc;

- (id)init;

- (id)initWithArchive:(const struct CellCoordinateVectorArchive *)arg1;

- (void)removeAllCellCoordinates;

- (void)saveToArchive:(struct CellCoordinateVectorArchive *)arg1;



@end


