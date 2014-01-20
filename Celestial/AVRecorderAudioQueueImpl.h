/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AVRecorderImpl.h"



@class NSMutableDictionary;



@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl>

{

    _Bool _isActive;

    _Bool _isRecording;

    _Bool _isWriting;

    NSMutableDictionary *_attributes;

    unsigned int _fileType;

    unsigned int _audioCodec;

    long long _maxPCMFramesToRecord;

    _Bool _haveRecordedMaxPCMFrames;

    struct AudioStreamBasicDescription _recordingFormat;

    struct OpaqueAudioFileID *_audioFile;

    struct OpaqueAudioQueue *_audioQueue;

    unsigned int _numDeviceChannels;

    struct AudioQueueLevelMeterState *_audioLevels;

    struct AudioQueueLevelMeterState *_audioLevelsDB;

    unsigned long long _totalBytesRecorded;

    unsigned long long _totalPacketsRecorded;

    unsigned long long _totalFramesRecorded;

    struct AudioQueueBuffer *_buffers[3];

    _Bool _bufferUsed[3];

}



- (_Bool)activate:(id *)arg1;

- (id)attributeForKey:(id)arg1;

- (_Bool)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;

- (_Bool)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;

- (_Bool)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2 useDB:(_Bool)arg3;

- (unsigned long long)audioNumDeviceChannels;

- (_Bool)autoFocusAtPoint:(struct CGPoint)arg1;

- (void)copyEncoderCookieToFile;

- (void)deactivate;

- (void)dealloc;

- (id)filePath;

- (void)haveABuffer:(struct AudioQueueBuffer *)arg1 withTimeStamp:(const struct AudioTimeStamp *)arg2 andNumPackets:(unsigned int)arg3 andPacketDescs:(const struct AudioStreamPacketDescription *)arg4;

- (id)init;

- (id)initWithAttributes:(id)arg1;

- (_Bool)isActive;

- (_Bool)isRecording;

- (float)micVolume;

- (double)recordedDuration;

- (long long)recordedFileSizeInBytes;

- (void)setAttribute:(id)arg1 forKey:(id)arg2;

- (void)setFilePath:(id)arg1;

- (void)setMicVolume:(float)arg1;

- (_Bool)start;

- (void)stop;

- (_Bool)takePhoto;



@end


