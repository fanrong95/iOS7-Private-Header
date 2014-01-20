/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UINavigationController.h"


#import "NSCoding.h"



@class NSArray, NSMutableDictionary, UIView;



@interface UIImagePickerController : UINavigationController <NSCoding>

{

    long long _sourceType;

    id _image;

    struct CGRect _cropRect;

    NSArray *_mediaTypes;

    NSMutableDictionary *_properties;

    int _previousStatusBarStyle;

    struct {

        unsigned int visible:1;

        unsigned int isCleaningUp:1;

        unsigned int savingOptions:3;

        unsigned int didRevertStatusBar:1;

    } _imagePickerFlags;

}



+ (_Bool)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2;

+ (_Bool)_reviewCapturedItems;

+ (id)availableCaptureModesForCameraDevice:(long long)arg1;

+ (id)availableMediaTypesForSourceType:(long long)arg1;

+ (_Bool)isCameraDeviceAvailable:(long long)arg1;

+ (_Bool)isFlashAvailableForCameraDevice:(long long)arg1;

+ (_Bool)isSourceTypeAvailable:(long long)arg1;

- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;

- (_Bool)_allowsImageEditing;

- (_Bool)_allowsMultipleSelection;

- (void)_autoDismiss;

- (id)_cameraViewController;

- (id)_createInitialController;

- (_Bool)_didRevertStatusBar;

- (void)_imagePickerDidCancel;

- (void)_imagePickerDidCompleteWithInfo:(id)arg1;

- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;

- (unsigned long long)_imagePickerSavingOptions;

- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect)arg2;

- (void)_initializeProperties;

- (_Bool)_isCameraCaptureModeValid:(long long)arg1;

- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;

- (void)_populateArchivedChildViewControllers:(id)arg1;

- (id)_properties;

- (void)_removeAllChildren;

- (void)_setAllowsImageEditing:(_Bool)arg1;

- (void)_setAllowsMultipleSelection:(_Bool)arg1;

- (void)_setImagePickerSavingOptions:(unsigned long long)arg1;

- (void)_setProperties:(id)arg1;

- (void)_setValue:(id)arg1 forProperty:(id)arg2;

- (void)_setupControllersForCurrentMediaTypes;

- (void)_setupControllersForCurrentSourceType;

- (_Bool)_sourceTypeIsCamera;

- (void)_updateCameraCaptureMode;

- (id)_valueForProperty:(id)arg1;

@property(nonatomic) _Bool allowsEditing;

@property(nonatomic) _Bool allowsImageEditing;

@property(nonatomic) long long cameraCaptureMode;

@property(nonatomic) long long cameraDevice;

@property(nonatomic) long long cameraFlashMode;

@property(retain, nonatomic) UIView *cameraOverlayView;

@property(nonatomic) struct CGAffineTransform cameraViewTransform;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

@property(copy, nonatomic) NSArray *mediaTypes;

@property(nonatomic) _Bool showsCameraControls;

@property(nonatomic) long long sourceType;

@property(nonatomic) double videoMaximumDuration;

@property(nonatomic) long long videoQuality;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (_Bool)startVideoCapture;

- (void)stopVideoCapture;

- (unsigned long long)supportedInterfaceOrientations;

- (void)takePicture;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)viewWillUnload;



// Remaining properties

@property(nonatomic) id <UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; // @dynamic delegate;



@end


