/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSPUnknownContent;



__attribute__((visibility("hidden")))

@interface TSPUnarchiver : NSObject

{

    vector_029d225a _references;

    vector_8ef431c5 _repeatedReferences;

    vector_667badbd _finalizeHandlers;

    unsigned int _messageType;

    auto_ptr_4370f086 _message;

    long long _objectIdentifier;

    auto_ptr_2bf936f6 _strongReferences;

    unsigned long long _version;

    TSPUnknownContent *_unknownContent;

    id <TSPObjectDelegate> _objectDelegate;

    id <TSPLazyReferenceDelegate> _lazyReferenceDelegate;

    id <TSPUnarchiverDelegate> _delegate;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)addFinalizeHandler:(id)arg1;

@property(readonly, nonatomic) id <TSPUnarchiverDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) _Bool documentHasCurrentFileFormatVersion;

- (set_6550bfbd *)filterIdentifiers:(const set_6550bfbd *)arg1;

- (vector_667badbd *)finalizeHandlers;

@property(readonly, nonatomic) _Bool hasPreUFFVersion;

- (id)initWithMessageType:(unsigned int)arg1 message:(auto_ptr_4370f086)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr_2bf936f6)arg4 fieldInfos:(auto_ptr_40e77785)arg5 version:(unsigned long long)arg6 unknownMessages:(id)arg7 ignoreVersionChecking:(_Bool)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11 error:(id *)arg12;

@property(readonly, nonatomic) _Bool isCrossAppPaste;

@property(readonly, nonatomic) _Bool isCrossDocumentPaste;

@property(readonly, nonatomic) _Bool isFromPasteboard;

- (const struct Message *)message;

@property(readonly, nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;

@property(readonly, nonatomic) id <TSPObjectDelegate> objectDelegate; // @synthesize objectDelegate=_objectDelegate;

@property(readonly, nonatomic) long long objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;

@property(readonly, nonatomic) unsigned long long preUFFVersion;

- (id)readDataReferenceMessage:(const struct DataReference *)arg1;

- (void)readLazyReferenceMessage:(const struct Reference *)arg1 completion:(id)arg2;

- (void)readLazyReferenceMessage:(const struct Reference *)arg1 isWeak:(_Bool)arg2 allowUnknownObject:(_Bool)arg3 completion:(id)arg4;

- (void)readReferenceMessage1:(const struct Reference *)arg1 message2:(const struct Reference *)arg2 completion:(id)arg3;

- (void)readReferenceMessage:(const struct Reference *)arg1 completion:(id)arg2;

- (void)readReferenceMessage:(const struct Reference *)arg1 isWeak:(_Bool)arg2 allowUnknownObject:(_Bool)arg3 completion:(id)arg4;

- (void)readReferenceMessage:(const struct Reference *)arg1 repeatedMessage:(const RepeatedPtrField_a0d2dbe7 *)arg2 completion:(id)arg3;

- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(id)arg2;

- (void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 isWeak:(_Bool)arg2 allowUnknownObject:(_Bool)arg3 completion:(id)arg4;

- (void)readRepeatedReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(id)arg2;

- (void)readRepeatedReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 isWeak:(_Bool)arg2 allowUnknownObject:(_Bool)arg3 completion:(id)arg4;

- (void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(id)arg2;

- (void)readRepeatedWeakReferenceMessage:(const RepeatedPtrField_a0d2dbe7 *)arg1 completion:(id)arg2;

- (void)readSparseReferenceArchive:(const struct SparseReferenceArrayArchive *)arg1 class:(Class)arg2 completion:(id)arg3;

- (void)readWeakLazyReferenceMessage:(const struct Reference *)arg1 completion:(id)arg2;

- (void)readWeakReferenceMessage1:(const struct Reference *)arg1 message2:(const struct Reference *)arg2 completion:(id)arg3;

- (void)readWeakReferenceMessage:(const struct Reference *)arg1 completion:(id)arg2;

- (void)readWeakReferenceMessage:(const struct Reference *)arg1 repeatedMessage:(const RepeatedPtrField_a0d2dbe7 *)arg2 completion:(id)arg3;

- (vector_029d225a *)references;

- (vector_8ef431c5 *)repeatedReferences;

- (RepeatedField_80b81656 *)strongReferences;

@property(readonly, nonatomic) TSPUnknownContent *unknownContent; // @synthesize unknownContent=_unknownContent;

@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;



@end


