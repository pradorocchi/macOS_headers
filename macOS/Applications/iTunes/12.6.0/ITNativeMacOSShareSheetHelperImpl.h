//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class NSImage, NSMutableArray, NSSharingService, NSString, NSURL, NSWindow;

@interface ITNativeMacOSShareSheetHelperImpl : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    int _serviceID;
    NSSharingService *_service;
    NSURL *_imageURL;
    NSString *_storeID;
    NSString *_message;
    NSURL *_url;
    NSString *_html;
    NSString *_subject;
    shared_ptr_6c9e05ba _item;
    NSImage *_image;
    struct CGRect _sourceFrame;
    NSMutableArray *_urlsToPurge;
    NSWindow *_window;
}

+ (id)imageForService:(int)arg1;
+ (id)nameForService:(int)arg1;
+ (_Bool)isServiceEnabled:(int)arg1;
+ (id)availableServices;
+ (id)nativeConstantForService:(int)arg1;
+ (_Bool)shareUsingService:(int)arg1 sharingInfo:(const struct ShareSheetHelperSharingInfo *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(struct CGSize)arg3 contentRect:(struct CGRect *)arg4;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)_createWebArchive;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (BOOL)start;
- (void)cleanUpAfterSharing;
- (void)dealloc;
- (id)initWithService:(int)arg1 sharingInfo:(const struct ShareSheetHelperSharingInfo *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

