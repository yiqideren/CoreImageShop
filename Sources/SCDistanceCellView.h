//
//  SCDistanceCellView.h
//  CoreImageShop
//
//  Created by Simon CORSIN on 19/05/14.
//
//

#import <Cocoa/Cocoa.h>
#import "SCFilterParameterConfigurationCellView.h"

@interface SCDistanceCellView : SCFilterParameterConfigurationCellView

@property (weak) IBOutlet NSSlider *valueSlider;
@property (weak) IBOutlet NSTextField *valueTextField;

@end