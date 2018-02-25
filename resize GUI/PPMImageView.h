//
//  PPMImageView.h
//  resize GUI
//
//  Created by Omar Al-Ejel on 2/25/18.
//  Copyright © 2018 Omar Al-Ejel. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PPMImageView : NSView <CALayerDelegate>

@property (nonatomic) NSData *imgData;
@property (nonatomic) int imgWidth;
@property (nonatomic) int imgHeight;
@property (nonatomic) NSImageView *imgView;

- (id)initWithFrame:(NSRect)frameRect imageData:(NSData *)imgData;

@end
