<?php
// $Id: color.inc,v 1.13 2010/07/12 19:08:04 jarek Exp $

/**
 * @file
 * Color modules main settings file.
 */

$info = array(

  // Available colors and color labels used in theme.
  'fields' => array(
    'base' => t("Base"),
    'background' => t("Background"),
    'text' => t('Text'),
    'link' => t('Link'),
    'linkhover' => t('Hovered Link'),
    'linkunderline' => t('Link underline'),
    'slogan' => t('Slogan'),
    'navigation' => t('Navigation'),
    'navigationhover' => t('Navigation hover'),
    'tab' => t('Tab'),
    'blocktitle' => t('Block title'),
    'border' => t('Border'),
    'borderstrong' => t('Border strong'),
    'fieldset' => t('Fieldset'),
    'fieldsetborder' => t('Fieldset border'),
  ),

  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Gray (Default)'),
      'colors' => array(
        'base' => '#ffffff',
        'background' => '#f8f8f8',
        'text' => '#2e2e2e',
        'link' => '#086782',
        'linkhover' => '#e25401',
        'linkunderline' => '#cfdde5',
        'slogan' => '#e25400',
        'navigation' => '#2e2e2d',
        'navigationhover' => '#e25402',
        'tab' => '#f5f4f3',
        'blocktitle' => '#779125',
        'border' => '#e1e1e1',
        'borderstrong' => '#c4c4c4',
        'fieldset' => '#fbfbfb',
        'fieldsetborder' => '#e1e1e2',
      ),
    ),
    'green1' => array(
      'title' => t('Green 1'),
      'colors' => array(
        'base' => '#ffffff',
        'background' => '#fbfbf6',
        'text' => '#3d3d3d',
        'link' => '#899833',
        'linkhover' => '#e14601',
        'linkunderline' => '#e3eac1',
        'slogan' => '#899833',
        'navigation' => '#8e9e35',
        'navigationhover' => '#626c25',
        'tab' => '#fbfbf6',
        'blocktitle' => '#738b25',
        'border' => '#e7e1ce',
        'borderstrong' => '#d2c8aa',
        'fieldset' => '#fdfdfb',
        'fieldsetborder' => '#dad6c9',
      ),
    ),
    'green2' => array(
      'title' => t('Green 2'),
      'colors' => array(
        'base' => '#ffffff',
        'background' => '#fbfbf6',
        'text' => '#3d3d3d',
        'link' => '#157a9c',
        'linkhover' => '#e14601',
        'linkunderline' => '#cfdde5',
        'slogan' => '#e14601',
        'navigation' => '#8e9e35',
        'navigationhover' => '#626c25',
        'tab' => '#fbfbf6',
        'blocktitle' => '#779125',
        'border' => '#e7e1ce',
        'borderstrong' => '#d2c8aa',
        'fieldset' => '#fdfdfb',
        'fieldsetborder' => '#dad6c9',
      ),
    ),
    'purple' => array(
      'title' => t('Purple'),
      'colors' => array(
        'base' => '#ffffff',
        'background' => '#fefafb',
        'text' => '#2e2e2e',
        'link' => '#6c0d28',
        'linkhover' => '#e25401',
        'linkunderline' => '#eac8d1',
        'slogan' => '#e25401',
        'navigation' => '#6c0d28',
        'navigationhover' => '#83a80e',
        'tab' => '#fbf3f6',
        'blocktitle' => '#e25401',
        'border' => '#f7d6e2',
        'borderstrong' => '#d9a3b7',
        'fieldset' => '#fefafb',
        'fieldsetborder' => '#f7d6e2',
      ),
    ),
    'red' => array(
      'title' => t('Red'),
      'colors' => array(
        'base' => '#ffffff',
        'background' => '#fefbfa',
        'text' => '#2e2e2e',
        'link' => '#b9400e',
        'linkhover' => '#ef762f',
        'linkunderline' => '#faded3',
        'slogan' => '#ca592b',
        'navigation' => '#b9400e',
        'navigationhover' => '#7e2c0a',
        'tab' => '#fdf6f4',
        'blocktitle' => '#b9400e',
        'border' => '#e8dad5',
        'borderstrong' => '#e2bdae',
        'fieldset' => '#fefbfa',
        'fieldsetborder' => '#f7dad6',
      ),
    ),
    'yellow' => array(
      'title' => t('Yellow'),
      'colors' => array(
        'base' => '#ffffff',
        'background' => '#f9faef',
        'text' => '#383838',
        'link' => '#8d8017',
        'linkhover' => '#de4c01',
        'linkunderline' => '#f4eebc',
        'slogan' => '#afa02f',
        'navigation' => '#a0a465',
        'navigationhover' => '#6c6f42',
        'tab' => '#f7f8ec',
        'blocktitle' => '#afa02f',
        'border' => '#e2e5c3',
        'borderstrong' => '#dcd093',
        'fieldset' => '#fbfbf8',
        'fieldsetborder' => '#ddd7b6',
      ),
    ),
  ),

  // Images to copy over.
  'copy' => array(
    '../corolla/logo.png',
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'color/colors.css',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('link', 'text'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_image' => 'color/preview.png',
  'preview_css' => 'color/preview.css',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
