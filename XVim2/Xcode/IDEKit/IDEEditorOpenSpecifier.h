//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDENavigableItemArchivableRepresentation, NSString, NSURL;

@interface IDEEditorOpenSpecifier : NSObject
{
    DVTStackBacktrace *_creationBacktrace;	// 8 = 0x8
    IDENavigableItemArchivableRepresentation *_archivableRepresentation;	// 16 = 0x10
    DVTDocumentLocation *_locationToSelect;	// 24 = 0x18
    NSURL *_documentURL;	// 32 = 0x20
    DVTFileDataType *_fileDataType;	// 40 = 0x28
    NSString *_documentExtensionIdentifier;	// 48 = 0x30
    id _annotationRepresentedObject;	// 56 = 0x38
    id _exploreAnnotationRepresentedObject;	// 64 = 0x40
    BOOL _annotationWantsIndicatorAnimation;	// 72 = 0x48
    BOOL _highlightSelection;	// 73 = 0x49
}

+ (id)structureEditorOpenSpecifierForDocumentLocation:(id)arg1 inWorkspace:(id)arg2 error:(id *)arg3;
+ (id)structureEditorOpenSpecifierForDocumentURL:(id)arg1 inWorkspace:(id)arg2 annotationRepresentedObject:(id)arg3 wantsIndicatorAnimation:(BOOL)arg4 exploreAnnotationRepresentedObject:(id)arg5 error:(id *)arg6;
+ (id)structureEditorOpenSpecifiersForNavigableItems:(id)arg1 inWorkspace:(id)arg2 error:(id *)arg3;
//- (void).cxx_destruct;
- (id)_initWithNavigableItem:(id)arg1 locationToSelect:(id)arg2 documentExtensionIdentifier:(id)arg3 error:(id *)arg4;
- (id)_initWithNavigableItemArchivableRepresentation:(id)arg1 documentExtensionIdentifier:(id)arg2 locationToSelect:(id)arg3 annotationRepresentedObject:(id)arg4 wantsIndicatorAnimation:(BOOL)arg5 exploreAnnotationRepresentedObject:(id)arg6 error:(id *)arg7;
@property(readonly) id annotationRepresentedObject; // @synthesize annotationRepresentedObject=_annotationRepresentedObject;
@property(readonly) BOOL annotationWantsIndicatorAnimation; // @synthesize annotationWantsIndicatorAnimation=_annotationWantsIndicatorAnimation;
@property(readonly) NSString *documentExtensionIdentifier; // @synthesize documentExtensionIdentifier=_documentExtensionIdentifier;
@property(readonly) id exploreAnnotationRepresentedObject; // @synthesize exploreAnnotationRepresentedObject=_exploreAnnotationRepresentedObject;
@property(readonly) DVTFileDataType *fileDataType; // @synthesize fileDataType=_fileDataType;
@property BOOL highlightSelection; // @synthesize highlightSelection=_highlightSelection;
- (id)init;
- (id)initWithNavigableItem:(id)arg1 documentExtensionIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithNavigableItem:(id)arg1 error:(id *)arg2;
- (id)initWithNavigableItem:(id)arg1 locationToSelect:(id)arg2 documentExtensionIdentifier:(id)arg3 error:(id *)arg4;
- (id)initWithNavigableItem:(id)arg1 locationToSelect:(id)arg2 error:(id *)arg3;
- (id)initWithNavigableItemArchivableRepresentation:(id)arg1 documentExtensionIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithNavigableItemArchivableRepresentation:(id)arg1 error:(id *)arg2;
- (id)initWithNavigableItemArchivableRepresentation:(id)arg1 locationToSelect:(id)arg2 error:(id *)arg3;
@property(readonly) DVTDocumentLocation *locationToSelect; // @synthesize locationToSelect=_locationToSelect;
@property(readonly) IDENavigableItemArchivableRepresentation *navigableItemRepresentation; // @synthesize navigableItemRepresentation=_archivableRepresentation;

@end

