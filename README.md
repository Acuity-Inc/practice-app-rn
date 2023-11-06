![myacuity-logo](https://myacuity.com/wp-content/uploads/2021/06/brand.svg)

# Acuity React Native Template

This repository represents the template for a React Native project that currently supports iOS. See Read Me for more information.

## App README

See [the actual Project README](README_PROJECT.md) for more information.

## Template Usage

### Pre-requisites

1. Assuming that brew was previously installed on the workstation, per the target project's Read Me instructions: then use the `brew install tree` command.
2. Use the `brew install gomplate` command.
3. Create a new repository from the "Use This Template" menu in Github, with the new name for your project.
4. Locally edit [the configuration file](template_config.yaml) to pass in variables used to generate the codebase from the template:
   - project_name is intended to match the unique repository name
   - package_name is intended to be a shorter unique name that currenly becomes the App's title that is displayed on the device, the bundle ID, and is used to generate some project file names

### Generating the codebase

1. In your new project directory: run `sh scripts/generate_codebase.sh` and commit/push the resulting changes to your new repository, assuming they look good.
2. Setup repo access
3. Enable branch protections
